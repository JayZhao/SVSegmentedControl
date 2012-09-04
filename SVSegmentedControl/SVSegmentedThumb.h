//
// SVSegmentedThumb.h
// SVSegmentedControl
//
// Created by Sam Vermette on 25.05.11.
// Copyright 2011 Sam Vermette. All rights reserved.
//
// https://github.com/samvermette/SVSegmentedControl
//

#import <UIKit/UIKit.h>

@class SVSegmentedControl;

@interface SVSegmentedThumb : UIView

@property (nonatomic, strong) UIImage *backgroundImage; // default is nil;
@property (nonatomic, strong) UIImage *highlightedBackgroundImage; // default is nil;

@property (nonatomic, strong) UIColor *tintColor; // default is [UIColor grayColor]
@property (nonatomic, weak) UIColor *textColor; // default is [UIColor whiteColor]
@property (nonatomic, weak) UIColor *textShadowColor; // default is [UIColor blackColor]
@property (nonatomic) CGSize textShadowOffset; // default is CGSizeMake(0, -1)
@property (nonatomic) BOOL shouldCastShadow; // default is YES (NO when backgroundImage is set)

@end
