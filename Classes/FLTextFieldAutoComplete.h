//
//  FLTextFieldAutoComplete.h
//  TextFealdAutocompleat
//
//  Created by Denis Andreev on 09/03/2018.
//  Copyright © 2018 Denis Andreev. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NSArray* (^SetDataBlock)(NSString* inputValue);

@interface FLTextFieldAutoComplete : UITextField

@property (strong, nonatomic) UITableView *autocompleteList;

@property IBInspectable NSInteger listTextFontSize;
@property IBInspectable UIColor *listTextColor;
@property IBInspectable UIColor *listBackgroundColor;



/**
 Set data Array for autocomplete

 @param data NSArray contains NSStrings
 */
- (void)setStringsDataArray:(NSArray<NSString*>*)data;


/**
 Set data by changing fir load from remote data source

 @param dataBlock Block 
 */
- (void)setDataByBlock:(SetDataBlock)dataBlock;

@end
