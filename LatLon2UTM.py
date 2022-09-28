import sys
# pyLatLon2utm.cpython-37m-x86_64-linux-gnu.so 所在路径
sys.path.append("./LatLon2UTM/lib")
import pyLatLon2utm


class UTM:
    def __init__(self, longitude, latitude, mode=1):
        self.longitude = longitude
        self.latitude = latitude
        self.mode = mode
        self.pyutm = pyLatLon2utm.UTM()
        self.pyutm.setLonLat(self.longitude, self.latitude)

    def setLonLat(self, longitude, latitude):
        self.longitude = longitude
        self.latitude = latitude
        self.pyutm.setLonLat(self.longitude, self.latitude)

    def getUTM(self):
        self.utmX = self.pyutm.get_utmX()
        self.utmY = self.pyutm.get_utmY()
        self.zoneX = self.pyutm.get_zoneX()
        self.zoneY = self.pyutm.get_zoneY()
        return [self.utmX, self.utmY, self.zoneX, self.zoneY]

