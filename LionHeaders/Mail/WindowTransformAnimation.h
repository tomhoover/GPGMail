/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSAnimation.h"

@class FullScreenModalCapableWindow, ModalDimmingWindow;

@interface WindowTransformAnimation : NSAnimation
{
    FullScreenModalCapableWindow *_window;
    ModalDimmingWindow *_dimmingWindow;
    long long _animationType;
    long long _dimmingFade;
    struct CGPoint _anchorPoint;
    double _maxScreenPosition;
    BOOL _cancelled;
}

+ (id)windowTransformAnimationWithWindow:(id)arg1 dimmingWindow:(id)arg2 type:(long long)arg3;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long long)arg2;
- (id)initWithWindow:(id)arg1 dimmingWindow:(id)arg2 type:(long long)arg3;
- (double)_animationDurationForAnimationType:(long long)arg1;
- (unsigned long long)_animationCurveForAnimationType:(long long)arg1;
- (void)setWindowFlyInTranslationProgress:(double)arg1;
- (void)setWindowMagnificationForProgress:(double)arg1 anchorPoint:(struct CGPoint)arg2;
- (void)startAnimation;
- (void)cancelAnimation;
- (void)setCurrentProgress:(float)arg1;
- (void)dealloc;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly) long long animationType; // @synthesize animationType=_animationType;

@end
