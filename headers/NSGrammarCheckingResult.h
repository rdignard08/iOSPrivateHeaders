
@interface NSGrammarCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    @"NSArray" _details;
}

 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (id) grammarDetails;
 - (id) initWithRange:({_NSRange=QQ})adetails:(id)b;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;
 - (Q) resultType;


@end
