/* SBFullController */

#import <Cocoa/Cocoa.h>

@interface SBFullController : NSWindowController
{
	IBOutlet NSView *mainView;
	IBOutlet NSTextView *textView;

	id currentSong;
}

- (id)currentSong;
- (void)setCurrentSong:(id)aCurrentSong;

@end
