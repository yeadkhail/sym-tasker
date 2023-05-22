cmake_minimum_required(VERSION 3.24)
project(sym)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sym
        header.h
        functions/help.cpp
        main.cpp
        functions/version.cpp functions/asciiArtedName.cpp functions/dotSymFileChecker.cpp functions/randomiser.cpp functions/motivation.cpp functions/initializer.cpp functions/insert.cpp functions/insertaskdata.cpp functions/TagEdit.cpp functions/TagWise.cpp functions/readtaskdata.cpp functions/attachmentfolderpathstring.cpp functions/dotsymfilestring.cpp functions/filecopy.cpp functions/TagDelete.cpp functions/TagInsert.cpp functions/isUrgent.cpp functions/showAttachment.cpp functions/filechangerforoutputtable.cpp functions/outputTable.cpp functions/showTable.cpp functions/TaskDelete.cpp functions/isExpired.cpp)
