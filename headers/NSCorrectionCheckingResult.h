
@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {

    @"NSArray" _alternativeStrings;
}

 - (id) resultByAdjustingRangesWithOffset:(long long)a;
 - (id) alternativeStrings;
 - (id) initWithRange:({_NSRange=QQ})areplacementString:(id)balternativeStrings:(id)c;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) resultType;


@end
