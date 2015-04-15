
@interface _UIKeyboardTypingSpeedLogger : NSObject {

    [7q] _typingDelaySamples;
    q _typingDelaySampleCount;
}

 - (void) logToAggregate;
 - (void) recordTypingDelay:(d)a;
 - (id) init;


@end
