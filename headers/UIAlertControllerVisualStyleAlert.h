
@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle {

    UIAlertControllerDescriptor _descriptor;
}

 - (void) dealloc;
 - (double) maximumWidth;
 - (void) setDescriptor:(id)a;
 - (double) verticalContentMargin;
 - (id) titleLabelFont;
 - (id) titleLabelColor;
 - (double) marginAboveTitleLabelFirstBaseline;
 - (double) marginBelowLastLabelLastBaseline;
 - (id) messageLabelFont;
 - (id) messageLabelColor;
 - (double) horizontalContentMargin;
 - (double) visualAltitude;
 - (id) regularActionFont;
 - (id) defaultActionFont;
 - (double) minimumActionHeight;
 - ({CGAffineTransform=dddddd}) presentationAnimationStartTransform;
 - (double) marginBelowTitleLabelLastBaseline;
 - (double) marginAboveMessageLabelFirstBaseline;
 - (double) marginBelowMessageLabelLastBaseline;
 - (double) backgroundCornerRadius;
 - (id) descriptor;


@end
