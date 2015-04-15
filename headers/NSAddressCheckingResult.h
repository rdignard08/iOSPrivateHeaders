
@interface NSAddressCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    NSDictionary* _components;
    id _underlyingResult;
}

 - (id) components;
 - (id) resultByAdjustingRangesWithOffset:(long long)a ;
 - (BOOL) _adjustRangesWithOffset:(long long)a ;
 - (^v) underlyingResult;
 - (id) initWithRange:({_NSRange=QQ})a components:(id)b ;
 - (id) initWithRange:({_NSRange=QQ})a components:(id)b underlyingResult:(^v)c ;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - ({_NSRange=QQ}) range;
 - (unsigned long long) resultType;


@end
