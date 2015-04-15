
@interface _UIKeyboardTypingSpeedLogger : NSObject {

    [7q] _typingDelaySamples;
    long long _typingDelaySampleCount;
}

 - (void) logToAggregate;
 - (void) recordTypingDelay:(double)a ;
 - (id) init;


@end
