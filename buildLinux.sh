#!/bin/sh

if [ "$#" -ne 2 ]; then
    echo "Missing or invalid arguments supplied"
    echo "Usage: buildLinux.sh <distributionName> <version>"
    echo " e.g.: buildLinux.sh Ubuntu18 1.0.1"
    exit 1
fi

ModelsArchiveName=Models_$2.zip
rm -f $ModelsArchiveName

for ModelName in src/Models/*.cpp
do
    ModelName=${ModelName##*/}
    ModelName=${ModelName%%.*}
    echo "****************************************** BUILDING ${ModelName} ******************************************"
	
    for BuildType in Debug Release
    do
        cmake -BBuild/${BuildType}/x64/ -H. -DCMAKE_BUILD_TYPE=${BuildType} -DMODEL_NAME=${ModelName} -DOS_NAME=$1
        make -C Build/${BuildType}/x64/
		mv Build/${BuildType}/x64/lib${ModelName}.so Build/${BuildType}/x64/${ModelName}.so 
    done
	
done 

zip -r $ModelsArchiveName Build -i '*.so'
