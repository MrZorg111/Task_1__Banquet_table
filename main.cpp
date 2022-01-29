#include <iostream>
#include <iostream>
#include <string>

// "fork" "spoon" "knife" "dessert spoon"
// "plate_first_course" "plate_second_course" "dessert_plate"
int main() {
   std::string tableware [12][4]{{"fork","spoon","knife","dessert spoon"},
                                 {"fork","spoon","knife","dessert spoon"},
                                 {"fork","spoon","knife"},
                                 {"fork","spoon","knife"},
                                 {"fork","spoon","knife"},
                                 {"fork","spoon","knife"},
                                 {"fork","spoon","knife"},
                                 {"fork","spoon","knife"},
                                 {"fork","spoon","knife"},
                                 {"fork","spoon","knife"},
                                {"fork","spoon","knife"},
                                {"fork","spoon","knife"}};

   std::string plates [12][3] {{"plate_first_course","plate_second_course","dessert_plate"},
                               {"plate_first_course","plate_second_course","dessert_plate"},
                               {"plate_first_course","plate_second_course"},
                               {"plate_first_course","plate_second_course"},
                               {"plate_first_course","plate_second_course"},
                               {"plate_first_course","plate_second_course"},
                               {"plate_first_course","plate_second_course"},
                               {"plate_first_course","plate_second_course"},
                               {"plate_first_course","plate_second_course"},
                               {"plate_first_course","plate_second_course"},
                              {"plate_first_course","plate_second_course"},
                              {"plate_first_course","plate_second_course"},};
   // "chair"
   std::string chair[12][1] {{"chair"},
                             {"chair"},
                             {"chair"},
                             {"chair"},
                             {"chair"},
                             {"chair"},
                             {"chair"},
                             {"chair"},
                             {"chair"},
                             {"chair"},
                            {"chair"},
                            {"chair"},};

for ( int i = 0; i < 12; i++) {
    std::cout << i << " - ";
    for (int j = 0; j < 4 ; j++) {
        std::cout << tableware[i][j] << " ";
    }
    if ( i > 1) {
        std::cout << "\t\t\t";
    }
    else {
        std::cout << "\t";
    }
    for (int k = 0; k < 3; k++) {
        std::cout << plates[i][k] << " ";
    }
    if ( i > 1) {
        std::cout << "\t\t";
    }
    else {
        std::cout << "\t";
    }
    for (int y = 0; y < 1; y++) {
        std::cout << chair[i][y] << " ";
    }
    std::cout << std::endl;
}

}
// << plates[i][j] << " " << chair[i][j] << " ";