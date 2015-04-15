
@interface UISubTest : NSObject {

    NSNumber _startTime;
    NSNumber _startFrame;
    NSMutableArray _time;
    NSMutableArray _fps;
    NSString _testName;
    BOOL _showTime;
    BOOL _showFps;
}

 - (void) .cxx_destruct;
 - (id) initWithName:(id)ametrics:(id)b;
 - (void) startWithFrameCount:(id)a;
 - (void) stopWithFrameCount:(id)a;
 - (id) outputData;


@end
