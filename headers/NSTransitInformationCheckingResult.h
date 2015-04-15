
@interface NSTransitInformationCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    @"NSDictionary" _components;
    id _underlyingResult;
}

 - (id) components;
 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (^v) underlyingResult;
 - (id) initWithRange:({_NSRange=QQ})acomponents:(id)b;
 - (id) initWithRange:({_NSRange=QQ})acomponents:(id)bunderlyingResult:(^v)c;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (Q) resultType;


@end
