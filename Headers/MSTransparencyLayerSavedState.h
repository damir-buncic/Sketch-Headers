//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSGraphicsContext, NSString;

@interface MSTransparencyLayerSavedState : NSObject
{
    BOOL _shouldFlip;
    NSGraphicsContext *_graphicsContext;
    struct CGContext *_contextRef;
    NSString *_name;
    struct CGRect _deviceRect;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL shouldFlip; // @synthesize shouldFlip=_shouldFlip;
@property(nonatomic) struct CGRect deviceRect; // @synthesize deviceRect=_deviceRect;
@property(nonatomic) struct CGContext *contextRef; // @synthesize contextRef=_contextRef;
@property(retain, nonatomic) NSGraphicsContext *graphicsContext; // @synthesize graphicsContext=_graphicsContext;
- (void).cxx_destruct;
- (void)dealloc;

@end

