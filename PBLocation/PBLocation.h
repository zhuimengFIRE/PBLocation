//
//  PBLocation.h
//  test
//
//  Created by Playboy on 2016/12/30.
//  Copyright © 2016年 ywkj. All rights reserved.
//
/**
 ************************************************
 ******请求用户权限,需要在info.plist中添加两个值******
 ******NSLocationAlwaysUsageDescription**********
 ******NSLocationWhenInUseUsageDescription*******
 ************************************************
 */

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

/**
 定位模型
 */
@interface PBLocationModel : NSObject
/** 当前定位的经度纬度 */
@property (nonatomic, strong) CLLocation    *currentLocation;
/** 定位的地理位置信息 */
@property (nonatomic, strong) NSDictionary  *locatedAddress;
/** 位置名 */
@property (nonatomic, strong) NSString      *name;
/**  街道 */
@property (nonatomic, strong) NSString      *thoroughfare;
/** 子街道 */
@property (nonatomic, strong) NSString      *subThoroughfare;
/** 市 */
@property (nonatomic, strong) NSString      *locality;
/** 区 */
@property (nonatomic, strong) NSString      *subLocality;
/** 省（州） */
@property (nonatomic, strong) NSString      *administrativeArea;
/** 其他行政信息，可能是县镇乡等 */
@property (nonatomic, strong) NSString      *subAdministrativeArea;
/** 邮政编码 */
@property (nonatomic, strong) NSString      *postalCode;
/** 国家编码 */
@property (nonatomic, strong) NSString      *ISOcountryCode;
/** 国家 */
@property (nonatomic, strong) NSString      *country;

@end


typedef void (^complateBlock) (BOOL isSuccess, PBLocationModel *locationModel);

@interface PBLocation : NSObject

/**
 实例化对象
 */
+ (instancetype)location;

/**
 开始定位

 @param block 返回定位信息
 */
- (void)startLocationAddress:(complateBlock)block;

@end
