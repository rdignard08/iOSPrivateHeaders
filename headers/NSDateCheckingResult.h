
@interface NSDateCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    @"NSDate" _date;
    @"NSTimeZone" _timeZone;
    d _duration;
    @"NSDate" _referenceDate;
    id _underlyingResult;
    BOOL _timeIsSignificant;
    BOOL _timeIsApproximate;
    BOOL _timeIsPast;
}

 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (d) duration;
 - (^v) underlyingResult;
 - (id) initWithRange:({_NSRange=QQ})adate:(id)b;
 - (id) initWithRange:({_NSRange=QQ})adate:(id)btimeZone:(id)cduration:(d)d;
 - (id) initWithRange:({_NSRange=QQ})adate:(id)btimeZone:(id)cduration:(d)dreferenceDate:(id)eunderlyingResult:(^v)ftimeIsSignificant:(BOOL)gtimeIsApproximate:(BOOL)htimeIsPast:(BOOL)i;
 - (id) referenceDate;
 - (id) initWithRange:({_NSRange=QQ})adate:(id)btimeZone:(id)cduration:(d)dreferenceDate:(id)e;
 - (id) initWithRange:({_NSRange=QQ})adate:(id)btimeZone:(id)cduration:(d)dreferenceDate:(id)eunderlyingResult:(^v)f;
 - (id) initWithRange:({_NSRange=QQ})adate:(id)btimeZone:(id)cduration:(d)dreferenceDate:(id)eunderlyingResult:(^v)ftimeIsSignificant:(BOOL)gtimeIsApproximate:(BOOL)h;
 - (BOOL) timeIsSignificant;
 - (BOOL) timeIsApproximate;
 - (BOOL) timeIsPast;
 - (id) description;
 - (void) dealloc;
 - (id) date;
 - (id) timeZone;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (Q) resultType;


@end
