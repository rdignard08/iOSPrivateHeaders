
@interface _UIMotionEffectEngineLogger : NSObject {

    [8q] _motionLevelSamples;
    long long _sampleCount;
    long long _updateFreqency;
    double _lastUpdateTimeStamp;
}

 - (id) initWithFastUpdateInterval:(double)aslowUpdateInterval:(double)b;
 - (double) lastRecordedTimestamp;
 - (void) recordMotionMagnitude:(double)aatTimestamp:(double)b;
 - (void) _dumpToAggregated;


@end
