
@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell {

    UIImageView* _symbol;
    UILabel* _title;
    UIView* _selectedCircle;
}

 - (id) title;
 - (void) setTitle:(id)a;
 - (id) symbol;
 - (void) dealloc;
 - (id) initWithStyle:(long long)areuseIdentifier:(id)b;
 - (void) setPressIndicatorHidden:(BOOL)a;
 - (void) setTitleText:(id)a;
 - (void) setSelectedCircleBlendMode:(BOOL)a;
 - (id) titleFont;
 - (id) symbolFont;
 - (void) setSymbol:(id)a;
 - (id) selectedCircle;
 - (void) setSelectedCircle:(id)a;


@end
