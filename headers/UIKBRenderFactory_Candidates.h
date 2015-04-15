
@interface UIKBRenderFactory_Candidates : UIKBRenderFactory {

}

 - (id) initWithRenderConfig:(id)a ;
 - (id) traitsForEmptyExtendedPane:({CGSize=dd})a rowHeight:(double)b idiomPad:(BOOL)c clipCorners:(BOOL)d ;
 - (id) controlKeyBackgroundColorName;
 - (id) traitsForHWRCellSize:({CGSize=dd})a highlighted:(BOOL)b ;
 - (id) traitsForExtendedCellSize:({CGSize=dd})a highlighted:(BOOL)b groupHeader:(BOOL)c edges:(unsigned long long)d ;
 - (id) traitsForSortControlBackgroundWithSize:({CGSize=dd})a edges:(unsigned long long)b ;
 - (id) traitsForEdgeGradientWithSize:({CGSize=dd})a ;
 - (id) traitsForToggleButtonWithSize:({CGSize=dd})a highlighted:(BOOL)b edges:(unsigned long long)c ;
 - (id) traitsForCellSize:({CGSize=dd})a highlighted:(BOOL)b edges:(BOOL)c ;
 - (id) defaultKeyDividerColorName;
 - (id) controlKeyDividerColorName;
 - (long long) lightHighQualityEnabledBlendForm;
 - (id) controlKeyForegroundColorName;


@end
