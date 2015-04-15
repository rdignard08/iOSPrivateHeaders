
@interface NSDateCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    NSDate* _date;
    NSTimeZone* _timeZone;
    double _duration;
    NSDate* _referenceDate;
    id _underlyingResult;
    BOOL _timeIsSignificant;
    BOOL _timeIsApproximate;
    BOOL _timeIsPast;
}

 - (id) resultByAdjustingRangesWithOffset:(long long)a ;
 - (BOOL) _adjustRangesWithOffset:(long long)a ;
 - (double) duration;
 - (^v) underlyingResult;
 - (id) initWithRange:({_NSRange=QQ})a date:(id)b ;
 - (id) initWithRange:({_NSRange=QQ})a date:(id)b timeZone:(id)c duration:(double)d ;
 - (id) initWithRange:({_NSRange=QQ})a date:(id)b timeZone:(id)c duration:(double)d referenceDate:(id)e underlyingResult:(^v)f timeIsSignificant:(BOOL)g timeIsApproximate:(BOOL)h timeIsPast:(BOOL)i ;
 - (id) referenceDate;
 - (id) initWithRange:({_NSRange=QQ})a date:(id)b timeZone:(id)c duration:(double)d referenceDate:(id)e ;
 - (id) initWithRange:({_NSRange=QQ})a date:(id)b timeZone:(id)c duration:(double)d referenceDate:(id)e underlyingResult:(^v)f ;
 - (id) initWithRange:({_NSRange=QQ})a date:(id)b timeZone:(id)c duration:(double)d referenceDate:(id)e underlyingResult:(^v)f timeIsSignificant:(BOOL)g timeIsApproximate:(BOOL)h ;
 - (BOOL) timeIsSignificant;
 - (BOOL) timeIsApproximate;
 - (BOOL) timeIsPast;
 - (id) description;
 - (void) dealloc;
 - (id) date;
 - (id) timeZone;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - ({_NSRange=QQ}) range;
 - (unsigned long long) resultType;


@end
