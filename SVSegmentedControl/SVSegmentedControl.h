//
// SWSegmentedControl.h
// SWSegmentedControl
//
// Created by Sam Vermette on 26.10.10.
// Copyright 2010 Sam Vermette. All rights reserved.
//
// https://github.com/samvermette/SVSegmentedControl
//

#import <UIKit/UIKit.h>
#import "SVSegmentedThumb.h"
#import <AvailabilityMacros.h>

@protocol SVSegmentedControlDelegate;

@interface SVSegmentedControl : UIControl

@property (nonatomic, copy) void (^changeHandler)(NSUInteger newIndex); // you can also use addTarget:action:forControlEvents:

@property (nonatomic, strong, readonly) SVSegmentedThumb *thumb;
@property (nonatomic) NSUInteger selectedIndex; // default is 0
@property (nonatomic) BOOL animateToInitialSelection; // default is NO
@property (nonatomic) BOOL crossFadeLabelsOnDrag; // default is NO

@property (nonatomic, strong) UIColor *tintColor; // default is [UIColor grayColor]
@property (nonatomic, strong) UIImage *backgroundImage; // default is nil

@property (nonatomic) CGFloat height; // default is 32.0
@property (nonatomic) UIEdgeInsets thumbEdgeInset; // default is UIEdgeInsetsMake(2, 2, 3, 2)
@property (nonatomic) UIEdgeInsets titleEdgeInsets; // default is UIEdgeInsetsMake(0, 10, 0, 10)
@property (nonatomic) CGFloat cornerRadius; // default is 4.0

@property (nonatomic, strong) UIFont *font; // default is [UIFont boldSystemFontOfSize:15]
@property (nonatomic, strong) UIColor *textColor; // default is [UIColor grayColor];
@property (nonatomic, strong) UIColor *textShadowColor;  // default is [UIColor blackColor]
@property (nonatomic) CGSize textShadowOffset;  // default is CGSizeMake(0, -1)

- (SVSegmentedControl*)initWithSectionTitles:(NSArray*)titlesArray;
- (void)moveThumbToIndex:(NSUInteger)segmentIndex animate:(BOOL)animate;

@end


@protocol SVSegmentedControlDelegate

- (void)segmentedControl:(SVSegmentedControl*)segmentedControl didSelectIndex:(NSUInteger)index;

@end
