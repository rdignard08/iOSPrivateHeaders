
@interface UITouchData : NSObject {

    {CGPoint="x"d"y"d} startTouchDownLocation;
    Q lastTapCount;
    d lastTouchUpTimestamp;
    d lastTouchDownTimestamp;
    BOOL touchIsValidTap;
    @"UITouch" lastTouch;
}



@end
