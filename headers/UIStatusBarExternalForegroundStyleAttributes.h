
@interface UIStatusBarExternalForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes {

}

 - (double) scale;
 - (BOOL) usesVerticalLayout;
 - (double) edgePadding;
 - (double) standardPadding;
 - (id) textForNetworkType:(int)a ;
 - (long long) activityIndicatorStyleWithSyncActivity:(BOOL)a ;
 - ({UIEdgeInsets=dddd}) edgeInsetsForBatteryInsides;
 - ({UIEdgeInsets=dddd}) edgeInsetsForBluetoothBatteryInsides;
 - (double) textOffsetForStyle:(long long)a ;
 - (id) expandedNameForImageName:(id)a ;
 - (id) makeTextFontForStyle:(long long)a ;


@end
