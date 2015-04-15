
@interface UIScrollTestParameters : NSObject {

    i _iterations;
    i _delta;
    i _scrollLength;
    f _startOffset;
    @"NSString" _currentTest;
    i _axis;
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
 - (id) initWithName:(id)aiterations:(i)bdelta:(i)clength:(i)dstartOffset:(f)escrollAxis:(i)f;
 - (void) setDisplayLink:(id)a;
 - (id) displayLink;
 - (id) currentTest;
 - (i) scrollLength;
 - (i) axis;
 - (i) delta;
 - (void) setDelta:(i)a;
 - (i) iterations;
 - (void) setIterations:(i)a;
 - (void) setCurrentTest:(id)a;
 - (void) setScrollLength:(i)a;
 - (void) setStartOffset:(f)a;
 - (f) startOffset;
 - (f) endOffset;
 - (void) setAxis:(i)a;


@end
