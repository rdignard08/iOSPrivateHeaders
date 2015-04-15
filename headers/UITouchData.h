
@interface UITouchData : NSObject {

    {CGPoint="x"d"y"d} startTouchDownLocation;
    unsigned long long lastTapCount;
    double lastTouchUpTimestamp;
    double lastTouchDownTimestamp;
    BOOL touchIsValidTap;
    @"UITouch" lastTouch;
}



@end
