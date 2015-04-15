
@interface NSMutableParagraphStyle : NSParagraphStyle {

}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) setHyphenationFactor:(float)a ;
 - (void) setTighteningFactorForTruncation:(float)a ;
 - (void) setHeaderLevel:(long long)a ;
 - (void) setTextBlocks:(id)a ;
 - (void) setTextLists:(id)a ;
 - (void) _mutateTabStops;
 - (void) setParagraphStyle:(id)a ;
 - (void) addTabStop:(id)a ;
 - (void) removeTabStop:(id)a ;
 - (void) setAlignment:(long long)a ;
 - (void) setFirstLineHeadIndent:(double)a ;
 - (void) setHeadIndent:(double)a ;
 - (void) setTailIndent:(double)a ;
 - (void) setTabStops:(id)a ;
 - (void) setDefaultTabInterval:(double)a ;
 - (void) setLineBreakMode:(long long)a ;
 - (void) setLineHeightMultiple:(double)a ;
 - (void) setMaximumLineHeight:(double)a ;
 - (void) setMinimumLineHeight:(double)a ;
 - (void) setLineSpacing:(double)a ;
 - (void) setParagraphSpacing:(double)a ;
 - (void) setParagraphSpacingBefore:(double)a ;
 - (void) setBaseWritingDirection:(long long)a ;


@end
