//
// Created by yead on 5/22/23.
//
#include <iostream>
#include <fstream>
#include <string>

int fileChangerForOutputTable()
{


    char *lad1 = NULL;
    size_t len = 0;
    std::string fileName1 = "d1.txt";
    std::ifstream file1(fileName1);
    if (!file1.is_open()) {
        std::cout << "Unable to open file: " << fileName1 << std::endl;
        return 1;  // Exit the program with an error code
    }

    std::ofstream fout1("data6.txt");
    if (!fout1.is_open()) {
        std::cout << "Unable to open output file: data6.txt" << std::endl;
        file1.close();  // Close the input file before exiting
        return 1;  // Exit the program with an error code
    }

    std::string line;
    int lineCount = 0;

    while (std::getline(file1, line)) {
        if (lineCount == 9) {

            break;
        }
        int charCount = line.length();
        lineCount++;
        if (charCount > 30) {
            lineCount++;
            if (fout1.fail()) {
                std::cout << "Error in writing to file" << std::endl;
                file1.close();  // Close the input file before exiting
                fout1.close();  // Close the output file before exiting
                return 1;  // Exit the program with an error code
            }
            for (int i = 0; i < 30; i++) {
                fout1 << line[i];
            }
            fout1 << "||" << std::endl;
            for (int i = 30; i < line.length(); i++) {
                fout1 << line[i];
            }
            for (int i = line.length(); i < 60; i++) {
                fout1 << " ";
            }
            fout1 << "||" << std::endl;
        } else {
            for (int i = 0; i < 30; i++) {
                if (i < charCount) {
                    fout1 << line[i];
                } else {
                    fout1 << " ";
                }
            }
            fout1 << "||" << std::endl;
        }
    }

    if (lineCount < 10) {
        for (int i = 0; i < 10 - lineCount; i++) {
            for (int j = 0; j < 30; j++) {
                fout1 << " ";
            }
            fout1 << "||" << std::endl;
        }


        file1.close();
        fout1.close();


        std::string fileName2 = "d2.txt";
        std::ifstream file2(fileName2);
        if (!file2.is_open()) {
            std::cout << "Unable to open file: " << fileName2 << std::endl;
            return 1;  // Exit the program with an error code
        }

        std::ofstream fout2("data7.txt");
        if (!fout2.is_open()) {
            std::cout << "Unable to open output file: data7.txt" << std::endl;
            file2.close();  // Close the input file before exiting
            return 1;  // Exit the program with an error code
        }

        lineCount = 0;

        while (std::getline(file2, line)) {
            if (lineCount == 9) {
                break;
            }
            int charCount = line.length();
            lineCount++;
            if (charCount > 30) {
                lineCount++;
                if (fout2.fail()) {
                    std::cout << "Error in writing to file" << std::endl;
                    file2.close();  // Close the input file before exiting
                    fout2.close();  // Close the output file before exiting
                    return 1;  // Exit the program with an error code
                }
                for (int i = 0; i < 30; i++) {
                    fout2 << line[i];
                }
                fout2 << "||" << std::endl;
                for (int i = 30; i < line.length(); i++) {
                    fout2 << line[i];
                }
                for (int i = line.length(); i < 60; i++) {
                    fout2 << " ";
                }
                fout2 << "||" << std::endl;
            } else {
                for (int i = 0; i < 30; i++) {
                    if (i < charCount) {
                        fout2 << line[i];
                    } else {
                        fout2 << " ";
                    }
                }
                fout2 << "||" << std::endl;
            }
        }

        if (lineCount < 10) {
            for (int i = 0; i < 10 - lineCount; i++) {
                for (int j = 0; j < 30; j++) {
                    fout2 << " ";
                }
                fout2 << "||" << std::endl;
            }
        }

        file2.close();
        fout2.close();


        std::string fileName3 = "d3.txt";
        std::ifstream file3(fileName3);
        if (!file3.is_open()) {
            std::cout << "Unable to open file: " << fileName3 << std::endl;
            return 1;  // Exit the program with an error code
        }

        std::ofstream fout3("data8.txt");
        if (!fout3.is_open()) {
            std::cout << "Unable to open output file: data8.txt" << std::endl;
            file3.close();  // Close the input file before exiting
            return 1;  // Exit the program with an error code
        }

        lineCount = 0;

        while (std::getline(file3, line)) {
            if (lineCount == 10) {
                break;
            }
            int charCount = line.length();
            lineCount++;
            if (charCount > 30) {
                lineCount++;
                if (fout3.fail()) {
                    std::cout << "Error in writing to file" << std::endl;
                    file3.close();  // Close the input file before exiting
                    fout3.close();  // Close the output file before exiting
                    return 1;  // Exit the program with an error code
                }
                for (int i = 0; i < 30; i++) {
                    fout3 << line[i];
                }
                fout3 << "||" << std::endl;
                for (int i = 30; i < line.length(); i++) {
                    fout3 << line[i];
                }
                for (int i = line.length(); i < 60; i++) {
                    fout3 << " ";
                }
                fout3 << "||" << std::endl;
            } else {
                for (int i = 0; i < 30; i++) {
                    if (i < charCount) {
                        fout3 << line[i];
                    } else {
                        fout3 << " ";
                    }
                }
                fout3 << "||" << std::endl;
            }
        }

        if (lineCount < 10) {
            for (int i = 0; i < 10 - lineCount; i++) {
                for (int j = 0; j < 30; j++) {
                    fout3 << " ";
                }
                fout3 << "||" << std::endl;
            }
        }

        file3.close();
        fout3.close();


        std::string fileName4 = "d4.txt";
        std::ifstream file4(fileName4);
        if (!file4.is_open()) {
            std::cout << "Unable to open file: " << fileName4 << std::endl;
            return 1;  // Exit the program with an error code
        }

        std::ofstream fout4("data9.txt");
        if (!fout4.is_open()) {
            std::cout << "Unable to open output file: data9.txt" << std::endl;
            file4.close();  // Close the input file before exiting
            return 1;  // Exit the program with an error code
        }

        lineCount = 0;

        while (std::getline(file4, line)) {
            if (lineCount == 10) {
                break;
            }
            int charCount = line.length();
            lineCount++;
            if (charCount > 30) {
                lineCount++;
                if (fout4.fail()) {
                    std::cout << "Error in writing to file" << std::endl;
                    file4.close();  // Close the input file before exiting
                    fout4.close();  // Close the output file before exiting
                    return 1;  // Exit the program with an error code
                }
                for (int i = 0; i < 30; i++) {
                    fout4 << line[i];
                }
                fout4 << "||" << std::endl;
                for (int i = 30; i < line.length(); i++) {
                    fout4 << line[i];
                }
                for (int i = line.length(); i < 60; i++) {
                    fout4 << " ";
                }
                fout4 << "||" << std::endl;
            } else {
                for (int i = 0; i < 30; i++) {
                    if (i < charCount) {
                        fout4 << line[i];
                    } else {
                        fout4 << " ";
                    }
                }
                fout4 << "||" << std::endl;
            }
        }

        if (lineCount < 10) {
            for (int i = 0; i < 10 - lineCount; i++) {
                for (int j = 0; j < 30; j++) {
                    fout4 << " ";
                }
                fout4 << "||" << std::endl;
            }
        }

        file4.close();
        fout4.close();

        return 0;
    }
    return 0;
}