/*
 *     Generated by class-dump 3.3.2 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSApplicationDelegate-Protocol.h"

@class NSTextField, NSWindow;

@interface MySuperCoolAppAppDelegate : NSObject <NSApplicationDelegate>
{
    NSWindow *window;
    NSTextField *label;
    BOOL licensed;
}

@property(nonatomic, getter=isLicensed) BOOL licensed; // @synthesize licensed;
@property(retain, nonatomic) NSTextField *label; // @synthesize label;
@property NSWindow *window; // @synthesize window;
- (void)buttonPressed:(id)arg1;
- (void)awakeFromNib;
- (void)applicationDidFinishLaunching:(id)arg1;

@end
