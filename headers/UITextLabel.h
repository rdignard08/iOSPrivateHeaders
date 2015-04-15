
@interface UITextLabel : UILabel {

}

 - (void) setCentersHorizontally:(BOOL)a;
 - (BOOL) centersHorizontally;
 - (BOOL) wrapsText;
 - ({CGSize=dd}) ellipsizedTextSize;
 - (void) setHighlightedColor:(id)a;
 - (id) highlightedColor;
 - (void) setWrapsText:(BOOL)a;
 - (void) setTextAutoresizesToFit:(BOOL)a;
 - (BOOL) textAutoresizesToFit;
 - (void) setMinFontSize:(f)a;
 - (f) minFontSize;
 - (void) setColor:(id)a;
 - (id) color;
 - (q) alignment;
 - (void) setAlignment:(q)a;
 - (void) drawRect:({CGRect={CGPoint=dd}{CGSize=dd}})a;


@end
