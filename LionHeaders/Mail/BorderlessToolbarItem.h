/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSToolbarItem.h"

@class NSImage;

@interface BorderlessToolbarItem : NSToolbarItem
{
    double _width;
}

- (id)initWithItemIdentifier:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (void)validate;
- (id)control;
- (void)setLabel:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
@property(retain) NSImage *inactiveImage; // @dynamic inactiveImage;
@property(retain) NSImage *pressedImage; // @dynamic pressedImage;

@end
