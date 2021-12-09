#include <iostream>

using namespace std;

int main() {

    const double WEST = 102.0;
    const double EAST = 90.0;
    const double NORTH = 43.0;
    const double SOUTH = 37.0;
    const double MIDDLE_LAT = 40.0;
    const double MIDDLE_LON = 96.0;

    double lat;
    double lon;
    cout << "Please enter the latitude of the location: ";
    cin >> lat;
    cout << "Please enter the longitude of the location: ";
    cin >> lon;
    string area;

    if (lat > NORTH) {
        area = "the Northern Area";
    } else if (lat < SOUTH) {
        area = "the Southern Area";
    } else {
        if (lon > WEST) {
            area = "the Western Area";
        } else if (lon < EAST) {
            area = "the Eastern Area";
        } else {
            if (lat > MIDDLE_LAT) {
                if (lon > MIDDLE_LON) {
                    area = "Nebraska";
                } else {
                    area = "Iowa";
                }
            } else {
                if (lon > MIDDLE_LON) {
                    area = "Kansas";
                } else {
                    area = "Missouri";
                }
            }
        }

    }

    cout << "The location is found in " << area << endl;
    return 0;
}
