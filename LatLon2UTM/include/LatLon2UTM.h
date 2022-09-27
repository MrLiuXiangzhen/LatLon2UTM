//
// Created by LiuXiangzhen on 22-9-27.
//
#pragma once
#include "cmath"

class UTM{
public:
    UTM() = default;
    UTM(double lon, double lat, int mode=1);

    void setLonLat(double lon, double lat);

    void getUTM(double& x, double& y, int& ZoneNumberX, char& ZoneNumberY);

    double operator-(UTM utm);

protected:
    // 计算圆周长
    double perimeter(double r);

    double search_r(double lat);

    void calcZone();

    void calcUTM_algorithm1();

    void calcUTM_algorithm2();

private:
    double PI = 3.141592654;
    double r_pole = 6356908.8;  // 极半径
    double r_equator = 6377830;  // 赤道半径
    int alg_mode = 1;
    double longitude{};
    double latitude{};
    double utm_x{}, utm_y{};
    double abs_utm_x{}, abs_utm_y{};
    int ZoneX{};
    char ZoneY{};
};
