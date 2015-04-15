
@interface NSSubstitutionCheckingResult : NSTextCheckingResult {

    {_NSRange="location"Q"length"Q} _range;
    NSString* _replacementString;
}

 - (id) resultByAdjustingRangesWithOffset:(long long)a ;
 - (BOOL) _adjustRangesWithOffset:(long long)a ;
 - (id) replacementString;
 - (id) initWithRange:({_NSRange=QQ})a replacementString:(id)b ;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - ({_NSRange=QQ}) range;


@end
