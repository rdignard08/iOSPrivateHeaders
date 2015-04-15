
@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {

    @"NSArray" _alternativeStrings;
}

 - (id) resultByAdjustingRangesWithOffset:(q)a;
 - (id) alternativeStrings;
 - (id) initWithRange:({_NSRange=QQ})areplacementString:(id)balternativeStrings:(id)c;
 - (id) description;
 - (void) dealloc;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) resultType;


@end
