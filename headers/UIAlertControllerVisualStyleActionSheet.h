
@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle {

    @"UIAlertControllerDescriptor" _descriptor;
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
 - (id) defaultActionBackgroundColorWhenSeparate;
 - (double) minimumActionHeight;
 - (double) sectionDelimitingSeparatorDimension;
 - (double) marginBelowTitleLabelLastBaseline;
 - (double) marginAboveMessageLabelFirstBaseline;
 - (double) marginBelowMessageLabelLastBaseline;
 - (double) backgroundCornerRadius;
 - (id) descriptor;
 - (double) _systemFontSize;


@end
