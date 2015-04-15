
@interface NSSubstitutionCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    @"NSString" _replacementString;
}

 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (BOOL) _adjustRangesWithOffset:(q)a;
 - (id) replacementString;
 - (id) initWithRange:({_NSRange=QQ})areplacementString:(id)b;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - ({_NSRange=QQ}) range;


@end