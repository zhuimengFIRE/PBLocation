//
//  ViewController.m
//  PBLocation
//
//  Created by Playboy on 2016/12/30.
//  Copyright © 2016年 ywkj. All rights reserved.
//

#import "ViewController.h"
#import "PBLocation.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[PBLocation location] startLocationAddress:^(BOOL isSuccess, PBLocationModel *locationModel) {
        if (isSuccess) {
            NSDictionary *dic = locationModel.locatedAddress;
            NSLog(@"%@",dic);
        }else {
            NSLog(@"定位失败");
        }
    }];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
