# PBLocation
一句话实现定位信息的获取
```
[[PBLocation location] startLocationAddress:^(PBLocationModel *locationModel) {
     NSDictionary *dic = locationModel.locatedAddress;
     NSLog(@"%@",dic);
}];
```
