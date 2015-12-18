//
//  VVSpringCollectionViewFlowLayout.h
//  VVSpringCollectionViewDemo
//
//  Created by 王 巍 on 13-9-1.
//  Copyright (c) 2013年 王 巍. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VVSpringCollectionViewFlowLayout : UICollectionViewFlowLayout
@property (nonatomic, assign) CGFloat springDamping;//阻尼
@property (nonatomic, assign) CGFloat springFrequency;//频率
@property (nonatomic, assign) CGFloat resistanceFactor;//阻力系数
@end
