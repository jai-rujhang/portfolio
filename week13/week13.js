function setup() {
    initializeFields();
    createCanvas(300, 300);
    fill(color(0x8F, 0xDA, 0xDE));
    textSize(50);
    textAlign(CENTER, CENTER);
}

// -1沒選
var choice;

function draw() {
    background(color(0xF3, 0xF5, 0xB9));
    text("Dinner 1", 150, 50);
    text("Dinner 2", 150, 150);
    text("Dinner 3", 150, 250);
    // 圓形
    if (choice == 0)
        ellipse(30, 50, 50, 50);
    if (choice == 1)
        ellipse(30, 150, 50, 50);
    if (choice == 2)
        ellipse(30, 250, 50, 50);
}

function mousePressed() {
    // 當滑鼠按下去時
    choice = int(random(3));
}

function initializeFields() {
    choice = -1;
}
