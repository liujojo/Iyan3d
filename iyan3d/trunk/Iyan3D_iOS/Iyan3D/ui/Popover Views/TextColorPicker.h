//
//  TextColorPicker.h
//  Iyan3D
//
//  Created by sabish on 06/01/16.
//  Copyright © 2016 Smackall Games. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GetPixelDemo.h"
#import "Vector3.h"
#import "Constants.h"

@protocol TextColorPickerDelegate
- (void) changeTextColor:(Vector3)textColor dragFinish:(BOOL)isDragFinish;
@end

@interface TextColorPicker : UIViewController<GetPixelDemoDelegate>{
    Vector3 color;    
}

- (id)initWithNibName:(NSString*)nibNameOrNil bundle:(NSBundle*)nibBundleOrNil TextColor:(Vector3)textColor;

@property (weak, nonatomic) IBOutlet UIView *colorPickerView;
@property (weak, nonatomic) IBOutlet UIView *colorPreview;
@property (strong, nonatomic) GetPixelDemo *demoView;
@property (strong, nonatomic) id <TextColorPickerDelegate> delegate;

@end