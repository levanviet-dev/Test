namespace QuanLyCaFe
{
    partial class fAdmin
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tpDoanhthu = new System.Windows.Forms.TabPage();
            this.btnThongKe = new System.Windows.Forms.Button();
            this.dtpkToDate = new System.Windows.Forms.DateTimePicker();
            this.dtpkFromDate = new System.Windows.Forms.DateTimePicker();
            this.tpThucan = new System.Windows.Forms.TabPage();
            this.tpDanhmuc = new System.Windows.Forms.TabPage();
            this.tpBan = new System.Windows.Forms.TabPage();
            this.tpTaiKhoan = new System.Windows.Forms.TabPage();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.tabControl1.SuspendLayout();
            this.tpDoanhthu.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tpDoanhthu);
            this.tabControl1.Controls.Add(this.tpThucan);
            this.tabControl1.Controls.Add(this.tpDanhmuc);
            this.tabControl1.Controls.Add(this.tpBan);
            this.tabControl1.Controls.Add(this.tpTaiKhoan);
            this.tabControl1.Location = new System.Drawing.Point(12, 15);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(532, 371);
            this.tabControl1.TabIndex = 0;
            // 
            // tpDoanhthu
            // 
            this.tpDoanhthu.Controls.Add(this.dataGridView1);
            this.tpDoanhthu.Controls.Add(this.btnThongKe);
            this.tpDoanhthu.Controls.Add(this.dtpkToDate);
            this.tpDoanhthu.Controls.Add(this.dtpkFromDate);
            this.tpDoanhthu.Location = new System.Drawing.Point(4, 22);
            this.tpDoanhthu.Name = "tpDoanhthu";
            this.tpDoanhthu.Padding = new System.Windows.Forms.Padding(3);
            this.tpDoanhthu.Size = new System.Drawing.Size(524, 345);
            this.tpDoanhthu.TabIndex = 0;
            this.tpDoanhthu.Text = "Doanh Thu";
            this.tpDoanhthu.UseVisualStyleBackColor = true;
            // 
            // btnThongKe
            // 
            this.btnThongKe.Location = new System.Drawing.Point(219, 6);
            this.btnThongKe.Name = "btnThongKe";
            this.btnThongKe.Size = new System.Drawing.Size(83, 29);
            this.btnThongKe.TabIndex = 2;
            this.btnThongKe.Text = "Thống Kê";
            this.btnThongKe.UseVisualStyleBackColor = true;
            // 
            // dtpkToDate
            // 
            this.dtpkToDate.Location = new System.Drawing.Point(318, 9);
            this.dtpkToDate.Name = "dtpkToDate";
            this.dtpkToDate.Size = new System.Drawing.Size(200, 20);
            this.dtpkToDate.TabIndex = 1;
            // 
            // dtpkFromDate
            // 
            this.dtpkFromDate.Location = new System.Drawing.Point(0, 9);
            this.dtpkFromDate.Name = "dtpkFromDate";
            this.dtpkFromDate.Size = new System.Drawing.Size(200, 20);
            this.dtpkFromDate.TabIndex = 0;
            // 
            // tpThucan
            // 
            this.tpThucan.Location = new System.Drawing.Point(4, 22);
            this.tpThucan.Name = "tpThucan";
            this.tpThucan.Padding = new System.Windows.Forms.Padding(3);
            this.tpThucan.Size = new System.Drawing.Size(524, 345);
            this.tpThucan.TabIndex = 1;
            this.tpThucan.Text = "Thức ăn";
            this.tpThucan.UseVisualStyleBackColor = true;
            // 
            // tpDanhmuc
            // 
            this.tpDanhmuc.Location = new System.Drawing.Point(4, 22);
            this.tpDanhmuc.Name = "tpDanhmuc";
            this.tpDanhmuc.Padding = new System.Windows.Forms.Padding(3);
            this.tpDanhmuc.Size = new System.Drawing.Size(524, 345);
            this.tpDanhmuc.TabIndex = 2;
            this.tpDanhmuc.Text = "Danh mục";
            this.tpDanhmuc.UseVisualStyleBackColor = true;
            // 
            // tpBan
            // 
            this.tpBan.Location = new System.Drawing.Point(4, 22);
            this.tpBan.Name = "tpBan";
            this.tpBan.Padding = new System.Windows.Forms.Padding(3);
            this.tpBan.Size = new System.Drawing.Size(524, 345);
            this.tpBan.TabIndex = 3;
            this.tpBan.Text = "Bàn";
            this.tpBan.UseVisualStyleBackColor = true;
            // 
            // tpTaiKhoan
            // 
            this.tpTaiKhoan.Location = new System.Drawing.Point(4, 22);
            this.tpTaiKhoan.Name = "tpTaiKhoan";
            this.tpTaiKhoan.Padding = new System.Windows.Forms.Padding(3);
            this.tpTaiKhoan.Size = new System.Drawing.Size(524, 345);
            this.tpTaiKhoan.TabIndex = 4;
            this.tpTaiKhoan.Text = "Tài Khoản";
            this.tpTaiKhoan.UseVisualStyleBackColor = true;
            // 
            // dataGridView1
            // 
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(6, 48);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(511, 283);
            this.dataGridView1.TabIndex = 3;
            // 
            // fAdmin
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(549, 398);
            this.Controls.Add(this.tabControl1);
            this.Name = "fAdmin";
            this.Text = "Admin";
            this.tabControl1.ResumeLayout(false);
            this.tpDoanhthu.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tpDoanhthu;
        private System.Windows.Forms.Button btnThongKe;
        private System.Windows.Forms.DateTimePicker dtpkToDate;
        private System.Windows.Forms.DateTimePicker dtpkFromDate;
        private System.Windows.Forms.TabPage tpThucan;
        private System.Windows.Forms.TabPage tpDanhmuc;
        private System.Windows.Forms.TabPage tpBan;
        private System.Windows.Forms.TabPage tpTaiKhoan;
        private System.Windows.Forms.DataGridView dataGridView1;
    }
}