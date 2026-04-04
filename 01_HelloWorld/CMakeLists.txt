cmake_minimum_required(VERSION 3.22)
project(01_HelloWorld)

set(CMAKE_CXX_STANDARD 14)

add_executable(01_HelloWorld
        01_HelloWorld.cpp
        02_Comment.cpp
        03_Variant.cpp
        04_Constant.cpp
        05_ReservedWord.cpp
        06_NamingRule.cpp
        07_DataType.cpp
        08_DataTypeSizeof.cpp
        09_DataTypeFloat.cpp
        10_DataTypeChar.cpp
        11_DataTypeEscape.cpp
        12_DataTypeString.cpp
        13_DataTypeBool.cpp
        14_DataTypeInput.cpp
        15_OperatorBase.cpp
        16_OperatorMod.cpp
        17_OperatorIncreament.cpp
        18_OperatorAssign.cpp
        19_OperatorComparison.cpp
        20_OperatorLogic.cpp)
