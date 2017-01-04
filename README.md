# PBLocation
一句话实现获取定位信息
```
[[PBLocation location] startLocationAddress:^(BOOL isSuccess, PBLocationModel *locationModel) {
    if (isSuccess) {
        NSDictionary *dic = locationModel.locatedAddress;
    NSLog(@"%@",dic);
    }else {
        NSLog(@"定位失败");
    }
}];
```
