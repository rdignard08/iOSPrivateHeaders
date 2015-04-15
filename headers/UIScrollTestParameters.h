
@interface UIScrollTestParameters : NSObject {

    int _iterations;
    int _delta;
    int _scrollLength;
    float _startOffset;
    @"NSString" _currentTest;
    int _axis;
    @"CADisplayLink" _displayLink;
}
@property (nonatomic, assign, readwrite) NSNumber* iterations;
@property (nonatomic, assign, readwrite) NSNumber* delta;
@property (nonatomic, assign, readwrite) NSNumber* scrollLength;
@property (nonatomic, assign, readwrite) NSNumber* startOffset;
@property (nonatomic, assign, readonly) NSNumber* endOffset;
@property (nonatomic, assign, readwrite) NSNumber* axis;
@property (nonatomic, retain, readwrite) NSString* currentTest;
@property (nonatomic, retain, readwrite) CADisplayLink* displayLink;

 - (void) dealloc;
 - (id) initWithName:(id)aiterations:(int)bdelta:(int)clength:(int)dstartOffset:(float)escrollAxis:(int)f;
 - (void) setDisplayLink:(id)a;
 - (id) displayLink;
 - (id) currentTest;
 - (int) scrollLength;
 - (int) axis;
 - (int) delta;
 - (void) setDelta:(int)a;
 - (int) iterations;
 - (void) setIterations:(int)a;
 - (void) setCurrentTest:(id)a;
 - (void) setScrollLength:(int)a;
 - (void) setStartOffset:(float)a;
 - (float) startOffset;
 - (float) endOffset;
 - (void) setAxis:(int)a;


@end
