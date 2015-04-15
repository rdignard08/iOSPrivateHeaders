
@interface _UIMotionAnalyzerHistory : NSObject {

    {UIOffset="horizontal"d"vertical"d} _lastAppliedViewerOffset;
    (_GLKQuaternion=""{?="v"(_GLKVector3=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"v"[3f])"s"f}""{?="x"f"y"f"z"f"w"f}"q"[4f]) _lastAppliedRelativeQuaternion;
    BOOL _isApplyingHysteresis;
    (_GLKQuaternion=""{?="v"(_GLKVector3=""{?="x"f"y"f"z"f}""{?="r"f"g"f"b"f}""{?="s"f"t"f"p"f}"v"[3f])"s"f}""{?="x"f"y"f"z"f"w"f}"q"[4f]) _relativeQuaternionOnHysteresisEntry;
}



@end
