#!/bin/sh

if [ "$#" -ne 2 ]; then
    echo "Missing or invalid arguments supplied"
	echo "Usage: buildLinux.sh <distributionName> <version>"
	echo " e.g.: buildLinux.sh Ubuntu18 1.0.1"
	exit 1
fi

for ModelName in src/Models/*.cpp
do
	ModelName=${ModelName##*/}
	ModelName=${ModelName%%.*}
	echo "****************************************** BUILDING ${ModelName} ******************************************"
    for BuildType in Debug Release
    do
        cmake -BBuild/${BuildType}/x64/ -H. -DCMAKE_BUILD_TYPE=${BuildType} -DMODEL_NAME=${ModelName} -DOS_NAME=$1
        make -C Build/${BuildType}/x64/
    done
done 

#nuget pack src/OSPSuite.CPP-Toolbox/OSPSuite.CPP-Toolbox_$1.nuspec -version $2

#cmake -BBuild/Release/x64/ -H. -DCMAKE_BUILD_TYPE=Release -DCMAKE_POSITION_INDEPENDENT_CODE=ON -DMODEL_NAME=Model1 -DOS_NAME=Ubuntu18
#make -C Build/Release/x64/