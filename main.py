from LatLon2UTM import UTM


# 经度
latitude = 34.25377
# 纬度
longitude = 108.96664
#  34.25377  108.96664   |   49S E 312769.3 N 3792164.7  // UTM x: 88826.608780, y: 250577.408907, Zone: 49, S
utm = UTM(longitude, latitude, 1)
info = utm.getUTM()
print(info)

