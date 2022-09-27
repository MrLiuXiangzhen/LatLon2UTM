//
// Created by LiuXiangzhen on 22-9-21.
//
#include "iostream"
#include "LatLon2UTM.h"

using namespace std;

int main() {
    double latitude1 = 28.24285, longitude1 = 112.93736;  // 长沙
    double latitude2 = 39.90726, longitude2 = 116.38982;  // 北京
    double latitude3 = 36.63703, longitude3 = 109.46969;  // 延安
    double latitude4 = 34.80872, longitude4 = 114.35181;  // 开封
    double UTME1, UTMN1;
    int zoneX;
    char zoneY;

    UTM utm1(longitude1, latitude1, 1);
    utm1.getUTM(UTME1, UTMN1, zoneX, zoneY);
    printf("longitude: %f, latitude: %f -> UTM x: %f, y: %f, Zone: %d, %c\n", longitude1, latitude1, UTME1, UTMN1, zoneX, zoneY);

    UTM utm2(longitude2, latitude2);
    utm2.getUTM(UTME1, UTMN1, zoneX, zoneY);
    printf("longitude: %f, latitude: %f -> UTM x: %f, y: %f, Zone: %d, %c\n", longitude1, latitude1, UTME1, UTMN1, zoneX, zoneY);

    UTM utm3(longitude3, latitude3);
    utm3.getUTM(UTME1, UTMN1, zoneX, zoneY);
    printf("longitude: %f, latitude: %f -> UTM x: %f, y: %f, Zone: %d, %c\n", longitude1, latitude1, UTME1, UTMN1, zoneX, zoneY);

    UTM utm4(longitude4, latitude4);
    utm4.getUTM(UTME1, UTMN1, zoneX, zoneY);
    printf("longitude: %f, latitude: %f -> UTM x: %f, y: %f, Zone: %d, %c\n", longitude1, latitude1, UTME1, UTMN1, zoneX, zoneY);

    printf("延安到北京的距离: %f \n", utm2 - utm3);
    return 0;
}

// gt:  34.24317  108.84281   |   49S E 301340.6 N 3791223.3    // 36 577610.23  3789439.94
// gt:  34.24319  108.84508   |   49S E 301549.6 N 3791221.1    // 36 577819.25  3789443.89
// gt:  34.23964  108.84271   |   49S E 301322.3 N 3790832.3    // 36 577604.26  3789048.43
// gt:  34.23967  108.84572   |   49S E 301600.1 N 3790829.7    // 36 577881.43  3789054.05

// 西北城角  34.27732  108.92047   |   49S E 308571.0 N 3794861.9  // 36 584727.52  3793288.69  // UTM x: 84560.194552, y: 253195.731974, Zone: 49, S
// 西南城角  34.25327  108.92054   |   49S E 308523.0 N 3792195.4  // 36 584758.09  3790621.89  // UTM x: 84590.885803, y: 250521.818183, Zone: 49, S
// -48   30.57   30.691251  |  -2,666.5   -2,666.8   -2,673.913791
// 东北城角  34.27783  108.96662   |   49S E 312821.1 N 3794833.4  // 36 588975.15  3793384.65  // UTM x: 88799.284982, y: 253252.434512, Zone: 49, S
// 东南城角  34.25377  108.96664   |   49S E 312769.3 N 3792164.7  // 36 589002.34  3790716.68  // UTM x: 88826.608780, y: 250577.408907, Zone: 49, S

// 西安站北   34.28137  108.95785  |   49S E 312021.2 N 3795241.5  // 36 588164.17  3793769.56
// 西安站南   34.27863  108.95795  |   49S E 312024.2 N 3794937.8  // 36 588176.24  3793465.81
// 西安北站   34.37768  108.93383  |   49S E 310026.7 N 3805968.7  // 36 585855.03  3804428.75

// 延安  36.63703  109.46969   |   49S E 363189.4 N 4055699.1  // 36 631390.37  4055613.89
// 北京  39.90726 116.38982  |  50S E 447844.4 N 4417641.8  // 39 447844.65  4417642.24
// 长沙  28.24285 112.93736  |  49R E 690077.9 N 3125625.6  // 38 395750.40  3124562.09
// 开封  34.80872 114.35181  |  50S E 257756.9 N 3855028.1 (NAD83/WGS84)  // 38 532177.84  3851887.57
// 66.09608 -178.17574   |   1W E 446840.6 N 7331118.6 (NAD83/WGS84)
// -25.81481 132.41463   |   53J E 240802.5 N 7142277.4 (NAD83/WGS84)


// 31N E 166021.3 N 0.0   31N E 833978.6 N 0.0 (NAD83/WGS84)
