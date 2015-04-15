
@interface NSMutableParagraphStyle : NSParagraphStyle {

}

 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) setHyphenationFactor:(f)a;
 - (void) setTighteningFactorForTruncation:(f)a;
 - (void) setHeaderLevel:(q)a;
 - (void) setTextBlocks:(id)a;
 - (void) setTextLists:(id)a;
 - (void) _mutateTabStops;
 - (void) setParagraphStyle:(id)a;
 - (void) addTabStop:(id)a;
 - (void) removeTabStop:(id)a;
 - (void) setAlignment:(q)a;
 - (void) setFirstLineHeadIndent:(d)a;
 - (void) setHeadIndent:(d)a;
 - (void) setTailIndent:(d)a;
 - (void) setTabStops:(id)a;
 - (void) setDefaultTabInterval:(d)a;
 - (void) setLineBreakMode:(q)a;
 - (void) setLineHeightMultiple:(d)a;
 - (void) setMaximumLineHeight:(d)a;
 - (void) setMinimumLineHeight:(d)a;
 - (void) setLineSpacing:(d)a;
 - (void) setParagraphSpacing:(d)a;
 - (void) setParagraphSpacingBefore:(d)a;
 - (void) setBaseWritingDirection:(q)a;


@end
