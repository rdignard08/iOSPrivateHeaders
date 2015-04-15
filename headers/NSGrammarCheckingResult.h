
@interface NSGrammarCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    NSArray* _details;
}

 - (id) resultByAdjustingRangesWithOffset:(long long)a ;
 - (BOOL) _adjustRangesWithOffset:(long long)a ;
 - (id) grammarDetails;
 - (id) initWithRange:({_NSRange=QQ})a details:(id)b ;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - ({_NSRange=QQ}) range;
 - (unsigned long long) resultType;


@end
